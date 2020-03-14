#
# Bash options
#

# Bash won't get SIGWINCH if another process is in the foreground.
# Enable checkwinsize so that bash will check the terminal size when
# it regains control.  #65623
# http://cnswww.cns.cwru.edu/~chet/bash/FAQ (E11)
shopt -s checkwinsize

# expand aliases in non-interactive shells
shopt -s expand_aliases

# Enable history appending instead of overwriting.  #139609
shopt -s histappend

# cd when only a directory path is entered
shopt -s autocd

