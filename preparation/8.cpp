StrangeMatrix transpose(StrangeMatrix m){
	StrangeMatrix res;
	res.first_line[0] = m.first_line[0];
	res.second_line[0] = m.first_line[1];
	res.third_line[0] = m.first_line[2];
	res.first_line[1] = m.second_line[0];
	res.second_line[1] = m.second_line[1];
	res.third_line[1] = m.second_line[2];
	res.first_line[2] = m.third_line[0];
	res.second_line[2] = m.third_line[1];
	res.third_line[2] = m.third_line[2];
	return res;
}
