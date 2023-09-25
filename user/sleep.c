if(argc < 2){
  fprintf(2, “Usage: sleep for a new sec…\n”);
  exit(-1);
}
sleep(atoi(argv[1]));
exit(1);
