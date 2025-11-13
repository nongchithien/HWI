from setuptools import find_packages
from setuptools import setup

setup(
    name='bkr_robot_interface',
    version='0.0.0',
    packages=find_packages(
        include=('bkr_robot_interface', 'bkr_robot_interface.*')),
)
