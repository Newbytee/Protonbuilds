# Proton 5.6-GE-2: Planet Zoo Edition 1

This is hacked-together version of [GloriousEggroll's fantastic Proton GE](https://github.com/GloriousEggroll/proton-ge-custom) including extra patches to fix Planet Zoo. These can be found inside patches/planet-zoo-fixes. 

Note that this should not be used with other games. It contains game-specific hacks which likely won't play nicely with other applications, and there is no runtime check to verify that the current game is Planet Zoo as implementing this causes the game to freeze on launch due to what seems to be a data race (likely due to the function taking too long to execute from grabbing an environment variable). 

Building works like any other version of Proton GE. I suggest you consult the Proton GE README for details, but here's the short version:

```sh
$ git clone --recurse-submodules --single-branch --branch planet-zoo https://github.com/Newbytee/Protonbuilds.git protonbuilds
$ cd protonbuilds
$ ./patches/protonprep.sh
$ build_name=<insert build name here> make redist
```

Credit goes to the brilliant people in this thread for coming up with how to get this game running: https://github.com/ValveSoftware/Proton/issues/3201
