
/* ==== __break @ 0045d13f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045d13f-0045d13f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


