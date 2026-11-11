
/* ==== __break @ 004736ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736ee-004736ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


