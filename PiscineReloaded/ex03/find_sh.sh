# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 12:24:30 by damateu-          #+#    #+#              #
#    Updated: 2024/01/02 14:42:06 by damateu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Write a command line that searches for all file names that end with ".sh" (without
#quotation marks) in the current directory and all its sub-directories. It should
#display only the file names without the .sh.

find . -type f -name "*.sh" -exec basename {} .sh \;
