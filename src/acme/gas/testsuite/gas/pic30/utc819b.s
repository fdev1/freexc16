; The penultimate instruction of a DO loop may not be a compare and skip.
	.text
	do	#1,DoLoopEnd
	nop
	nop
	cpseq	w0,w1
DoLoopEnd:
	nop
	.end


