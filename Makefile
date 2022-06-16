# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carys <carys@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 15:55:27 by carys             #+#    #+#              #
#    Updated: 2022/03/14 14:19:08 by carys            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

NAME_B	=	checker

SRCS	=	big_sorting.c 	sorting_utils.c 	main.c\
			pa_pb.c		sa_sb_ss.c		ra_rb_rr.c 	rra_rrb_rrr.c
				
SRCS_B	=	checker.c		gnl.c\
			pa_pb_bonus.c	sa_sb_ss_bonus.c 	ra_rb_rr_bonus.c	rra_rrb_rrr_bonus.c
			

SRCS_L	=	libft_utils.c		lst_utils.c		utils.c\
			ft_atoi.c			ft_split.c

HEADER	=	push_swap.h

OBJS	=	${SRCS:%.c=%.o}

OBJS_B	=	${SRCS_B:%.c=%.o}

OBJS_L	=	${SRCS_L:%.c=%.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

RM		=	 rm -f

.PHONY:		all clean fclean re bonus

all:		${NAME}

bonus:		${NAME_B}

%.o: 		%.c ${HEADER}
				${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${OBJS_L} ${HEADER}
				${CC} ${CFLAGS} ${OBJS} ${OBJS_L} -o ${NAME}

${NAME_B}:	${OBJS_B} ${OBJS_L} ${HEADER}
				${CC} ${CFLAGS} ${OBJS_B} ${OBJS_L} -o ${NAME_B}

clean:		
			${RM} ${OBJS} ${OBJS_B} ${OBJS_L}

fclean:		clean
			${RM} ${NAME} ${NAME_B}

re:			fclean all
