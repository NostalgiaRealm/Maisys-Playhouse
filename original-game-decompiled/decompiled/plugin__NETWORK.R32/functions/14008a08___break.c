
/* ==== __break @ 14008a08 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a08-14008a08
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


