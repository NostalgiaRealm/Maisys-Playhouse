
/* ==== __break @ 0048a338 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a338-0048a338
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


