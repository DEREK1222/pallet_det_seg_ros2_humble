FROM nvidia/cuda:11.7.1-cudnn8-devel-ubuntu22.04

############################## SYSTEM PARAMETERS ##############################
# * Arguments
ARG USER=initial
ARG GROUP=initial
ARG UID=1000
ARG GID="${UID}"
ARG SHELL=/bin/bash
ARG HARDWARE=x86_64
ARG ENTRYPOINT_FILE=entrypoint.sh

# * Env vars for the nvidia-container-runtime.
ENV NVIDIA_VISIBLE_DEVICES all
ENV NVIDIA_DRIVER_CAPABILITIES all
# ENV NVIDIA_DRIVER_CAPABILITIES graphics,utility,compute

# * Setup users and groups
RUN groupadd --gid "${GID}" "${GROUP}" \
    && useradd --gid "${GID}" --uid "${UID}" -ms "${SHELL}" "${USER}" \
    && mkdir -p /etc/sudoers.d \
    && echo "${USER}:x:${UID}:${UID}:${USER},,,:/home/${USER}:${SHELL}" >> /etc/passwd \
    && echo "${USER}:x:${UID}:" >> /etc/group \
    && echo "${USER} ALL=(ALL) NOPASSWD: ALL" > "/etc/sudoers.d/${USER}" \
    && chmod 0440 "/etc/sudoers.d/${USER}"

# * Replace apt urls
# ? Change to tku
RUN sed -i 's@archive.ubuntu.com@ftp.tku.edu.tw@g' /etc/apt/sources.list
# ? Change to Taiwan
# RUN sed -i 's@archive.ubuntu.com@tw.archive.ubuntu.com@g' /etc/apt/sources.list

# * Time zone
ENV TZ=Asia/Taipei
RUN ln -snf /usr/share/zoneinfo/"${TZ}" /etc/localtime && echo "${TZ}" > /etc/timezone

# * Copy custom configuration
# ? Requires docker version >= 17.09
COPY --chmod=0775 ./${ENTRYPOINT_FILE} /entrypoint.sh
COPY --chown="${USER}":"${GROUP}" --chmod=0775 config config
# ? docker version < 17.09
# COPY ./${ENTRYPOINT_FILE} /entrypoint.sh
# COPY config config
# RUN sudo chmod 0775 /entrypoint.sh && \
    # sudo chown -R "${USER}":"${GROUP}" config \
    # && sudo chmod -R 0775 config

############################### INSTALL #######################################
# * Install packages
RUN apt update \
    && apt install -y --no-install-recommends \
        sudo \
        vim \
        git \
        htop \
        cmake \
        wget \
        curl \
        psmisc \
        udev \
        # * Shell
        tmux \
        terminator \
        # * base tools
        python3-pip \
        python3-dev \
        # * Work tools
        usbutils \
        python3-pyqt5 \
        # * ROS depend tools
        lsb-release \
        software-properties-common \
        # libcanberra-gtk-module \
        # libcanberra-gtk3-module \
        # dbus-x11 \
        # libkeybinder-3.0-0 \
        # libnotify4 \
    && apt clean \
    && rm -rf /var/lib/apt/lists/*
    
RUN apt update \   
    && pip3 install \
    	install setuptools==58.2.0
    
# gnome-terminal libcanberra-gtk-module libcanberra-gtk3-module \
# dbus-x11 libglvnd0 libgl1 libglx0 libegl1 libxext6 libx11-6 \

RUN pip3 install --upgrade --force-reinstall pip && \
    pip3 install \	
    torch==1.13.1+cu117 \
    torchvision==0.14.1+cu117  \
    torchaudio==0.13.1 \
    -f https://download.pytorch.org/whl/cu117/torch_stable.html

# SOLO depend tools
RUN pip3 install \
    terminaltables \
    pycocotools \
    shapely \
    scipy \
    -U openmim 
RUN mim install mmcv-full==1.7.1
RUN mim install mmengine
RUN pip3 install yapf==0.40.1


# ROS2 Humble install
RUN add-apt-repository universe -y \
    && curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg \
    && echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" \
     | tee /etc/apt/sources.list.d/ros2.list > /dev/null \
    && apt update \
    && apt install -y --no-install-recommends \
        ros-humble-desktop \
    && apt clean \
    && rm -rf /var/lib/apt/lists/*
    
RUN echo "source /opt/ros/humble/setup.bash" >>/home/$USER/.bashrc

RUN apt update \
    && apt install -y --no-install-recommends \
    # * ROS depend tools
    python3-colcon-common-extensions \
    ros-humble-diagnostic-updater \
    && apt clean \
    && rm -rf /var/lib/apt/lists/*

RUN sudo apt update
RUN sudo apt install -y software-properties-common 

RUN sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE && sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE
####Realsense####
RUN sudo add-apt-repository "deb https://librealsense.intel.com/Debian/apt-repo $(lsb_release -cs) main" -u
## Install packages
RUN apt-get update && apt-get install -y --no-install-recommends \
  #Realsense SDK depend
#   librealsense2-dkms \
  librealsense2-utils \
  librealsense2-dev \
  librealsense2-dbg \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists  

############################### INSTALL #######################################
# * Switch workspace to /home/${USER}/.tmp
WORKDIR /home/${USER}/.tmp

# * Copy custom configuration
COPY config .

RUN bash ./script/shell_setup.sh \
    "bash" ${ROS_TYPE} ${ROS_MASTER_IP} ${ROS_SLAVE_IP} \
    && bash ./script/pip_setup.sh \
    && rm -rf /home/${USER}/.tmp

# * Copy entrypoint
COPY --chmod=0775 ./${ENTRYPOINT_FILE} /entrypoint.sh

# * Switch workspace to /home/${USER}
WORKDIR /home/${USER}

# * Switch user to ${USER}
USER ${USER}
RUN sudo mkdir work

# * Make SSH available
EXPOSE 22

# * Switch workspace to ~/work
WORKDIR /home/${USER}/work

ENTRYPOINT [ "/entrypoint.sh", "terminator" ]
# ENTRYPOINT [ "/entrypoint.sh", "byobu" ]
# ENTRYPOINT [ "/entrypoint.sh", "bash" ]
# ENTRYPOINT [ "/entrypoint.sh" ]
