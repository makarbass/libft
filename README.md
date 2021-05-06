<h1>First Part</h1>
<b>ft_memset:</b>     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

<b>ft_bzero:</b>    [OK] [OK] [OK] [OK] 

<b>ft_memcpy: </b>    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

<b>ft_memccpy: </b>   [OK] [OK] [OK] [FAILED] [FAILED] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

[fail]: your memccpy's return is false/doesn't work with basic params

[fail]: your memccpy does not work with not found char


<b>ft_memmove:  </b>  [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] [OK] 

[crash]: your memmove does not well with NULL as both parameters and size

<b>ft_memchr:</b>     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

<b>ft_memcmp: </b>    [OK] [OK] [OK] [FAILED] [FAILED] [FAILED] [FAILED] [OK] [OK] [OK] 

[fail]: your memcmp does not work with basic input

[fail]: your memcmp does not cast the memory in unsigned char

[fail]: your memcmp stop at \0

[fail]: your memcmp does not work with basic input


ft_strlen:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

ft_isalpha:    [OK] 

ft_isdigit:    [OK] 

ft_isalnum:    [OK] 

ft_isascii:    [OK] 

ft_isprint:    [OK] 

ft_toupper:    [OK] 

ft_tolower:    [OK] 

ft_strchr:     [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [OK] 

[fail]: your strchr does not work with \0


ft_strrchr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

ft_strncmp:    [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] 

[fail]: your strncmp does not cast in unsigned char the diff

[fail]: your strncmp does not work with non ascii chars


ft_strlcpy:    [OK] [OK] [FAILED] [FAILED] [FAILED] [OK] [💥 ] 

[fail]: your strlcpy overflow the dest

[fail]: your strlcpy does works whe size < strlen(src)

[fail]: your strlcpy does not works with 0-length string


ft_strlcat:    [OK] [FAILED] [FAILED] [FAILED] [OK] [OK] [FAILED] [FAILED] [OK] [FAILED] [OK] [OK] 

[fail]: your strlcat does not work with basic input

[fail]: your strlcat does not work with basic input

[fail]: your strlcat does not work with over length size

[fail]: your strcat does not work with empty string as second parameter

[fail]: your strlcat does not set a \0 to the end

[fail]: your strlcat return value is false


ft_strnstr:    [OK] [OK] [FAILED] [OK] [FAILED] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [NO CRASH] [NO CRASH] 

[fail]: your strnstr does not work with basic input

[fail]: your strnstr does not work with basic input

[no crash]: your strnstr does not segfault when null parameter is sent

[no crash]: your strnstr does not segfault when null parameter is sent


ft_atoi:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [KO] [KO] [OK] [OK] [OK] [OK] 

[KO]: your atoi does not work with over long max value

[KO]: your atoi does not work with over long min value


ft_calloc:     [OK] [OK] [FAILED] [OK] [OK] 

[fail]: your calloc don't work with empty string


ft_strdup:     [OK] [OK] [OK] [KO] [OK] [OK] [OK] 

[KO]: your strdup did not allocate the good size so the \0 test may be false
