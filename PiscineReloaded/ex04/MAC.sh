# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 12:41:43 by damateu-          #+#    #+#              #
#    Updated: 2024/01/02 15:07:45 by damateu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Write a command line that displays your machine's MAC addresses. Each address must be followed by a line break.

ifconfig | grep ether | awk '{print $2}'