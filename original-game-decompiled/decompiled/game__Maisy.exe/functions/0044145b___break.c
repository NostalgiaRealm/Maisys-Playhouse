
/* ==== __break @ 0044145b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044145b-0044145b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


