
/* ==== __break @ 004151ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004151ee-004151ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


