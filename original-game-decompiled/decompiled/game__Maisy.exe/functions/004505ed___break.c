
/* ==== __break @ 004505ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505ed-004505ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


