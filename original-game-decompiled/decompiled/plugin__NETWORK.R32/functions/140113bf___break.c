
/* ==== __break @ 140113bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113bf-140113bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


