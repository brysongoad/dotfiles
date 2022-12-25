require('telescope').setup{
    defaults = {
        -- setup ripgrep to include hidden files and disable regex, 
        -- other arguments are defaults needed to get the correct format for telescope
        vimgrep_arguments = {
            -- telescope defaults
            "rg",
            "--color=never",
            "--no-heading",
            "--with-filename",
            "--line-number",
            "--column",
            "--smart-case",
            -- custom settings
            "--hidden",
            "--fixed-strings"
        },
        file_ignore_patterns = { '.git' }
    },
    pickers = {
        find_files = {
            hidden = true
        }
    }
}

