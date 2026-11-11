
/* ==== __break @ 00410f7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410f7f-00410f7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


