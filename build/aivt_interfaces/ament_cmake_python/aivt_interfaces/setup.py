from setuptools import find_packages
from setuptools import setup

setup(
    name='aivt_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('aivt_interfaces', 'aivt_interfaces.*')),
)
