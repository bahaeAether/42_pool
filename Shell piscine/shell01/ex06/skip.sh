# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 21:59:26 by baboulou          #+#    #+#              #
#    Updated: 2022/06/30 21:59:55 by baboulou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ls -l | awk 'NR % 2 == 1'