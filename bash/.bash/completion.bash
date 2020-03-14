#
# Bash autocompletion
#

# If bash_completion has read permission, run it in the current shell
[ -r /usr/share/bash-completion/bash_completion ] && . /usr/share/bash-completion/bash_completion

# Auto complete sudo with commands as well as files
complete -cf sudo

