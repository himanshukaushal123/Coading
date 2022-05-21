string input="abc",output="";
void solve(string input,string output)
{
  if(input.size()==0){
    cout<<output<<endl;
    return;
  }
  //taken
  solve(input.substr(1),output+input[0]);
  //not taken
  solve(solve(input.substr(1),output);
}
