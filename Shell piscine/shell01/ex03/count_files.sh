# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 20:56:36 by baboulou          #+#    #+#              #
#    Updated: 2022/06/30 21:32:01 by baboulou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -o -type d | wc -l | tr -d ' '
