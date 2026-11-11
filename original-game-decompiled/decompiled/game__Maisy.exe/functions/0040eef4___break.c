
/* ==== __break @ 0040eef4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040eef4-0040eef4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


