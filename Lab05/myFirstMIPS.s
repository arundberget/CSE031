.text
main:
	# $t0 set manually
	# $t0 = $s0
	add $t0, $s0, $zero
	
	# $t1 = $t0 - 7
	addi $t1, $t0, -7
	
	# $t2 = $t1 + $t0
	add $t2, $t1, $t0
	
	# $t3 = $t2 + 2
	addi $t3, $t2, 2
	
	# $t4 = $t3 + $t2
	add $t4, $t3, $t2
	
	# $t5 = $t4 - 28
	addi $t5, $t4, -28
	
	# $t6 = $t4 - $t5
	sub $t6, $t4, $t5
	
	# $t7 = $t6 + 12
	addi $t7, $t6, 12
	
finish:
	# end program
	addi $a0, $t7, 0
	li $v0, 1
	syscall
	li $v0, 10
	syscall
	