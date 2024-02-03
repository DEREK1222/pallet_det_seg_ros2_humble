from setuptools import find_packages
from setuptools import setup

setup(
    name='pallet_seg_msg',
    version='0.0.0',
    packages=find_packages(
        include=('pallet_seg_msg', 'pallet_seg_msg.*')),
)
