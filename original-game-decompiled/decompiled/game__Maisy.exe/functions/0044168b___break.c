
/* ==== __break @ 0044168b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044168b-0044168b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


