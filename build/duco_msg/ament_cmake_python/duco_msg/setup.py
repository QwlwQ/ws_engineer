from setuptools import find_packages
from setuptools import setup

setup(
    name='duco_msg',
    version='0.0.0',
    packages=find_packages(
        include=('duco_msg', 'duco_msg.*')),
)
