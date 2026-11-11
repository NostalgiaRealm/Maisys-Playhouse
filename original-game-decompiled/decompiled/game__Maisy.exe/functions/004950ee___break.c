
/* ==== __break @ 004950ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950ee-004950ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


