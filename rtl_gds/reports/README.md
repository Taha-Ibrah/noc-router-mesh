# Flow reports

This folder retains the evidence used to document synthesis, timing analysis,
and physical implementation. For recorded stage metrics, see
[ASIC metrics](../../docs/asic_metrics.md).

Retained reports include:

- Synthesis and technology-mapping logs.
- Stage logs with commands, warnings, routing iterations, and result summaries.
- Final router DRC reports, including empty reports corresponding to zero
  router geometry violations. Read these alongside the matching run log.
- Antenna reports recording the outcome of each routing or repair stage.
- Setup, hold, electrical, constraint-coverage, parasitic-annotation, and CTS
  reports, including empty reports that are part of a stage's recorded checks.
- Placement estimates and extracted post-route results, so their different
  analysis conditions remain documented.

Cleanup removed 30 optional per-iteration DRC snapshots named
`*_drc.rpt-<iteration>.rpt` from antenna repair passes 1, 2, and 3 and the
electrical cushion reroute. Each run's full log and final `*_drc.rpt` remain.
These snapshots captured intermediate violations before the completed result.

The Tcl scripts can generate new snapshots for debugging; `.gitignore` excludes
them from future commits. No final reports or run logs were removed by this
cleanup. Router geometry checks are distinct from full-layout DRC and LVS.
