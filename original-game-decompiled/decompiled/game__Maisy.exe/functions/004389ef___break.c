
/* ==== __break @ 004389ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004389ef-004389ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


