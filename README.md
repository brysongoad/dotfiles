# Dotfiles
Dotfiles for my linux desktop setup. Bits and pieces borrowed from other setups with modifications. Not all configs are gauranteed to work together.

## Structure
File structure is intended for use with GNU stow. Each sub folder of the repo is structured to put configs in the appropriate place relative to the user's home directory.

## Installation
Install GNU stow, then for each desired config do:
`stow <name>`.
e.g. for the bash config
`stow bash`
