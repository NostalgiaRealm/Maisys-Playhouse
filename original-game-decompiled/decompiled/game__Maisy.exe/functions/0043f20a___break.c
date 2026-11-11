
/* ==== __break @ 0043f20a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f20a-0043f20a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


