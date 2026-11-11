
/* ==== __break @ 0042590f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042590f-0042590f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


