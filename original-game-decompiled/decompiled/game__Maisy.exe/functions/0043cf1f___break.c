
/* ==== __break @ 0043cf1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cf1f-0043cf1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


