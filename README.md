# Proton 5.6-GE-2: Planet Zoo Edition 1

This is hacked-together version of [GloriousEggroll's fantastic Proton GE](https://github.com/GloriousEggroll/proton-ge-custom) including extra patches to fix Planet Zoo. These can be found inside patches/planet-zoo-fixes. 

Building works like any other version of Proton GE. I suggest you consult the Proton GE README for details, but here's the short version

```sh
$ ./patches/protonprep.sh
$ build_name=<insert build name here> make redist
```

Credit goes to the brilliant people in this thread for coming up with how to get this game running: https://github.com/ValveSoftware/Proton/issues/3201
