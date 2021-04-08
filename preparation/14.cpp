bool check(Data d, Data limit_min, Data limit_max){
	bool res = false;
	if ((d.mst < limit_max.mst) and (d.mst > limit_min.mst) and \
	(d.tmp_pole < limit_max.tmp_pole) and (d.tmp_pole > limit_min.tmp_pole) and \
	(d.tmp_eq < limit_max.tmp_eq) and (d.tmp_eq > limit_min.tmp_eq) and \
	(d.ox_mpercent < limit_max.ox_mpercent) and (d.ox_mpercent > limit_min.ox_mpercent) and \
	(d.co2_mpercent < limit_max.co2_mpercent) and (d.co2_mpercent > limit_min.co2_mpercent))
		res = true;
	return res;
}
