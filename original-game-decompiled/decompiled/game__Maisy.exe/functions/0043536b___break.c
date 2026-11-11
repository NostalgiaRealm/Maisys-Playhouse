
/* ==== __break @ 0043536b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043536b-0043536b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


