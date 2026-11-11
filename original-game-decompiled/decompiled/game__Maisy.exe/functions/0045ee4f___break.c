
/* ==== __break @ 0045ee4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ee4f-0045ee4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


