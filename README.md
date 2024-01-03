
<h1 align="center">
  HypersomniaX Kernel
</h1>

<h4 align="center">Custom Kernel for Samsung M21.</h4>
<h4 align="center">Upstream from Grass Kernel</h4>

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#how-to-build">How To Build</a> •
  <a href="#credits">Credits</a>
</p>

## Key Features
 
* Disable Samsung securities, debug drivers, etc modifications
* Checkout and rebase against Android common kernel source, Removing Samsung additions to drivers like ext4,f2fs and more
* Compiled with bleeding edge Neutron Clang 17, with full LLVM binutils, LTO (Link time optimization) and -O3  
* Import Erofs, Incremental FS, BinderFS and several backports.
* Supports DeX touchpad for corresponding OneUI ports that have DeX ported.
* Lot of debug codes/configuration Samsung added are removed.
* Added [wireguard](https://www.wireguard.com/) driver, an open-source VPN driver in-kernel
* Added [KernelSU](https://kernelsu.org/)

## How To Build

setup all your environment !

```bash

# Clone this repository
$ git clone https://github.com/ahmadsubqi/hypersomniax_samsung_m21.git

# Go into the repository
$ cd hypersomniax_samsung_m21

# Build the kernel
$ ./build_kernel.sh aosp ksu # (for AOSP)
$ ./build_kernel.sh oneui ksu # (for OneUI)
$ DEVICE=m21 ./build_kernel.sh aosp # (for M21, non-KSU, AOSP)
```

After build the image of the kernel will be in out/arch/arm64/boot/Image


## Credits

- [roynatech2544](https://github.com/roynatech2544) for Grass source
- [Samsung Open Source](https://opensource.samsung.com/)
- [Android Open Source Project](https://source.android.com/)
- [The Linux Kernel](https://www.kernel.org/)


