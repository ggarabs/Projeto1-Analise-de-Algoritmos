aluno by_name(aluno a, aluno b){
	return strcmp(a.nome, b.nome) <= 0 ? a : b;
}

aluno by_sem(aluno a, aluno b){
	return a.semestre <= b.semestre ? a : b;
}

aluno by_all(aluno a, aluno b){
	if(a.semestre != b.semestre) return a.semestre <= b.semestre ? a : b;
	if(a.turma != b.turma) return a.turma <= b.turma ? a : b;
	if(a.periodo != b.periodo) return a.periodo <= b.periodo ? a : b;
	if(strcmp(a.disciplina, b.disciplina) != 0) return a.semestre <= b.semestre ? a : b;
	return strcmp(a.nome, b.nome) <= 0 ? a : b;
}

aluno by_mean(aluno a, aluno b){
	if(strcmp(a.disciplina, b.disciplina) != 0) return strcmp(a.disciplina, b.disciplina) <= 0 ? a : b;
	return a.media >= b.media ? a : b;
}

aluno by_all_v2(aluno a, aluno b){
	if(a.periodo != b.periodo) return a.periodo <= b.periodo ? a : b;
	if(a.semestre != b.semestre) return a.semestre <= b.semestre ? a : b;
	if(a.turma != b.turma) return a.turma <= b.turma ? a : b;
	if(strcmp(a.disciplina, b.disciplina) != 0) return a.semestre <= b.semestre ? a : b;
	return strcmp(a.nome, b.nome) <= 0 ? a : b;
}