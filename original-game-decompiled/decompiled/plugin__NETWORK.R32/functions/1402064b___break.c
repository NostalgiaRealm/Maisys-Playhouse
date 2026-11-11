
/* ==== __break @ 1402064b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064b-1402064b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


