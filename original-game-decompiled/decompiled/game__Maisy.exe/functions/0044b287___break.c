
/* ==== __break @ 0044b287 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b287-0044b287
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


