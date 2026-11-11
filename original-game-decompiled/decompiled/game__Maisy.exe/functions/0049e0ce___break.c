
/* ==== __break @ 0049e0ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e0ce-0049e0ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


