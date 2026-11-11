
/* ==== __break @ 0048eccc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048eccc-0048eccc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


