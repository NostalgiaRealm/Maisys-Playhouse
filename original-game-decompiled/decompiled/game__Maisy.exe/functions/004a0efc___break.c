
/* ==== __break @ 004a0efc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0efc-004a0efc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


