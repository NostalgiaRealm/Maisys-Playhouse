
/* ==== __break @ 0043baad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043baad-0043baad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


