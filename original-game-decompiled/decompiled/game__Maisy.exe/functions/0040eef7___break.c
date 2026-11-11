
/* ==== __break @ 0040eef7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040eef7-0040eef7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


