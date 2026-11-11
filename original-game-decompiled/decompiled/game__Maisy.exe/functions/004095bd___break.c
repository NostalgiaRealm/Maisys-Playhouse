
/* ==== __break @ 004095bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004095bd-004095bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


