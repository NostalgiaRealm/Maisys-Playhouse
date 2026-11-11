
/* ==== __break @ 140183bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bf-140183bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


