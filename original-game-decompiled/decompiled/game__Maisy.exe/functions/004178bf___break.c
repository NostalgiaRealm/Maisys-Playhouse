
/* ==== __break @ 004178bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178bf-004178bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


