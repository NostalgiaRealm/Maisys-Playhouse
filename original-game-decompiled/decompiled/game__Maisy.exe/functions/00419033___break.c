
/* ==== __break @ 00419033 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00419033-00419033
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


